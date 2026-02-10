import customtkinter as ctk
import random

class SmartDashboard(ctk.CTk):
    def __init__(self):
        super().__init__()
        
        self.title("Smart IoT Dashboard")
        self.geometry("400x500")
        self.fan_status = False
        self.Pump_status = False
        self.temp_value = 0.0
        self.setup_ui()
        self.update_sensor()

    def setup_ui(self):
        self.title_label = ctk.CTkLabel(self, text="Smart IoT Dashboard", font=("Arial", 24, "bold"))
        self.title_label.pack(pady=30)        

        self.temp_label = ctk.CTkLabel(self, text="Temperature: 0 °C", font=("Arial", 20))
        self.temp_label.pack(pady=10)
        self.controls_frame = ctk.CTkFrame(self, fg_color="transparent")
        self.controls_frame.pack(pady=30, padx=20)
        self.fan_label = ctk.CTkLabel(self.controls_frame, text="Fan: OFF", font=("Arial", 16))
        self.fan_label.grid(row=0, column=0, padx=20, pady=10)
        self.fan_button = ctk.CTkButton(self.controls_frame, text="Toggle Fan", 
                                        width=120, command=self.toggle_fan)
        self.fan_button.grid(row=0, column=1, padx=20, pady=10)
        self.Pump_label = ctk.CTkLabel(self.controls_frame, text="Pump: OFF", font=("Arial", 16))
        self.Pump_label.grid(row=1, column=0, padx=20, pady=10)
        self.Pump_button = ctk.CTkButton(self.controls_frame, text="Toggle Pump", 
                                         width=120, command=self.toggle_Pump)
        self.Pump_button.grid(row=1, column=1, padx=20, pady=10)
    def toggle_fan(self):
        self.fan_status = not self.fan_status
        if self.fan_status:
            self.fan_label.configure(text="Fan: ON", text_color="#1fbb3d")
        else:
            self.fan_label.configure(text="Fan: OFF", text_color="white")
    def toggle_Pump(self):
        self.Pump_status = not self.Pump_status
        if self.Pump_status:
            self.Pump_label.configure(text="Pump: ON", text_color="#1fbb3d")
        else:
            self.Pump_label.configure(text="Pump: OFF", text_color="white")
    def update_sensor(self):
        self.temp_value = random.uniform(25, 35)
        self.temp_label.configure(text=f"Temperature: {self.temp_value:.2f} °C")
        if self.temp_value > 30:
            self.temp_label.configure(text_color="#ff4c4c")
        else:
            self.temp_label.configure(text_color="white")
            
        self.after(1000, self.update_sensor)
if __name__ == "__main__":
    ctk.set_appearance_mode("Dark")
    ctk.set_default_color_theme("blue")
    app = SmartDashboard()
    app.mainloop()
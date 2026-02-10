import customtkinter as ctk
import random

class SmartDashboard(ctk.CTk):
    def __init__(self):
        super().__init__()
        # Window setup
        self.title("Smart IoT Dashboard")
        self.geometry("400x500")
        
        # ===== A1: FAN Status =====
        self.fan_status = False
        
        # ===== A2: Temperature =====
        self.temp_value = 0.0
        
        # ===== A3: Create UI =====
        self.setup_ui()
        
        # ===== A4: Start sensor reading =====
        self.update_sensor()

    def setup_ui(self):
        # ===== B1 Title =====
        self.title_label = ctk.CTkLabel(
            self,
            text="IoT Dashboard",
            font=("Arial", 20, "bold")
        )
        self.title_label.pack(pady=20)
        
        # ===== B2 Temperature Label =====
        self.temp_label = ctk.CTkLabel(
            self,
            text="Temperature: 0 °C",
            font=("Arial", 16)
        )
        self.temp_label.pack(pady=20)
        
        # ===== B3 FAN Status =====
        self.fan_label = ctk.CTkLabel(
            self,
            text="Fan: OFF",
            font=("Arial", 16)
        )
        self.fan_label.pack(pady=20)
        
        # ===== B4 Toggle Button =====
        self.fan_button = ctk.CTkButton(
            self,
            text="Toggle Fan",
            command=self.toggle_fan
        )
        self.fan_button.pack(pady=20)

    def toggle_fan(self):
        # ===== C1 OFF -> ON =====
        if not self.fan_status:
            self.fan_status = True
            self.fan_label.configure(text="Fan: ON")
        # ===== C2 ON -> OFF =====
        else:
            self.fan_status = False
            self.fan_label.configure(text="Fan: OFF")
    
    def update_sensor(self):
        # ===== D1 Random temperature =====
        self.temp_value = random.uniform(25, 35)
        
        # ===== D2 Update label =====
        self.temp_label.configure(
            text=f"Temperature: {self.temp_value:.2f} °C"
        )
        
        # ===== D3 Change color if HOT =====
        if self.temp_value > 30:
            self.temp_label.configure(text_color="red")
        else:
            self.temp_label.configure(text_color="white")
            
        # ===== D4 Update every 1 second =====
        self.after(1000, self.update_sensor)

if __name__ == "__main__":
    ctk.set_appearance_mode("dark")
    ctk.set_default_color_theme("blue")
    app = SmartDashboard()
    app.mainloop()
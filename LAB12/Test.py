import customtkinter as ctk
import random

class SmartDashboard(ctk.CTk):
    def __init__(self):
        super().__init__()

        # --- Window Configuration ---
        self.title("Smart IoT Dashboard")
        self.geometry("600x700")
        
        # --- State Management ---
        self.fan_is_on = False
        self.Pump_is_on = False
        self.temp_value = 0.0

        # --- UI Initialization ---
        self.setup_ui()
        
        # --- Start Loop ---
        self.update_sensor()

    def setup_ui(self):
        """สร้างและจัดวางองค์ประกอบของ UI"""
        
        # Header Section
        self.title_label = ctk.CTkLabel(
            self, text="IoT Dashboard", 
            font=("Arial", 24, "bold")
        )
        self.title_label.grid(pady=10, padx=200)

        # Data Display Section
        self.temp_label = ctk.CTkLabel(
            self, text="Temperature: -- °C", 
            font=("Arial", 18)
        )
        self.temp_label.grid(pady=4, padx=5)
# Fan status
        self.fan_label = ctk.CTkLabel(
            self, text="Fan Status: OFF", 
            font=("Arial", 18),
            text_color="gray"
        )
        self.fan_label.grid(pady=4, padx=5)
# Pump status
        self.Pump_label = ctk.CTkLabel(
            self, text="Pump Status: OFF", 
            font=("Arial", 18),
            text_color="gray"
        )
        self.Pump_label.grid(pady=4, padx=5)

# fan toggle button
        self.fan_button = ctk.CTkButton(
            self, text="Toggle Fan", 
            command=self.toggle_fan,
            hover_color="#2ea4cc"
        )
        self.fan_button.grid(pady=4, padx=5)
# Pump toggle button
        self.Pump_button = ctk.CTkButton(
            self, text="Toggle Pump", 
            command=self.toggle_Pump,
            hover_color="#2ea4cc"
        )
        self.Pump_button.grid(pady=4, padx=5)

    def toggle_fan(self):
        """สลับสถานะพัดลมและอัปเดต UI"""
        self.fan_is_on = not self.fan_is_on
        
        status_text = "Fan Status: ON" if self.fan_is_on else "Fan Status: OFF"
        status_color = "#2ecc71" if self.fan_is_on else "gray"
        
        self.fan_label.configure(text=status_text, text_color=status_color)
    def toggle_Pump(self):
        self.Pump_is_on = not self.Pump_is_on
        
        status_text = "Pump Status: ON" if self.Pump_is_on else "Pump Status: OFF"
        status_color = "#2ecc71" if self.Pump_is_on else "gray"
        
        self.Pump_label.configure(text=status_text, text_color=status_color)

    def update_sensor(self):
        """จำลองการอ่านค่า Sensor และอัปเดตหน้าจอทุก 1 วินาที"""
        self.temp_value = random.uniform(25, 35)
        
        # อัปเดตตัวเลขและสีตามเงื่อนไข
        color = "#e74c3c" if self.temp_value > 30 else "white"
        
        self.temp_label.configure(
            text=f"Temperature: {self.temp_value:.2f} °C",
            text_color=color
        )
        
        # วนลูปฟังก์ชันตัวเอง (Recursion-like loop)
        self.after(1000, self.update_sensor)

if __name__ == "__main__":
    ctk.set_appearance_mode("Dark")
    ctk.set_default_color_theme("blue")
    
    app = SmartDashboard()
    app.mainloop()
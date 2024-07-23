class HospitalStaff():
    def __init__(self, name, staff_id):
        self.name = name
        self.staff_id = staff_id

    def assign_duty(self):
        pass

    def perform_treatment(self):
        pass
    
    def manage_records(self):
        pass

class Doctor(HospitalStaff):
    def assign_duty(self):
        print(f"Doctor {self.name} (ID: {self.staff_id}) is assigned to surgery.")

    def perform_treatment(self):
        print(f"Doctor {self.name} is performing surgery.")

    def manage_records(self):
        print(f"Doctor {self.name} is updating patient records.")

class Nurse(HospitalStaff):
    def assign_duty(self):
        print(f"Nurse {self.name} (ID: {self.staff_id}) is assigned to patient care.")

    def perform_treatment(self):
        print(f"Nurse {self.name} is administering medication.")

    def manage_records(self):
        print(f"Nurse {self.name} is recording patient vitals.")

class Administrator(HospitalStaff):
    def assign_duty(self):
        print(f"Administrator {self.name} (ID: {self.staff_id}) is overseeing hospital operations.")

    def perform_treatment(self):
        print(f"Administrator {self.name} is not involved in direct patient care.")

    def manage_records(self):
        print(f"Administrator {self.name} is managing hospital records and schedules.")

# Create instances of Doctor, Nurse, and Administrator
doctor = Doctor("Dr. Smith", "D001")
nurse = Nurse("Nurse Jane", "N001")
admin = Administrator("Mr. Brown", "A001")

# Call methods for each instance
print("Hospital Staff Assignments:")
doctor.assign_duty()
doctor.perform_treatment()
doctor.manage_records()

print("\n")
nurse.assign_duty()
nurse.perform_treatment()
nurse.manage_records()

print("\n")
admin.assign_duty()
admin.perform_treatment()
admin.manage_records()
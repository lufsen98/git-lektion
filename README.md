''' mermaid 
    flowchart LR
    %% Main Hubs
    Central[Central Motion Hub]
    SmartHome[Smart Home Hub]
    Security[Security Hub]
    
    %% Motion Sensor Connected Systems
    Central --> Detection[Motion Detection]
    Detection --> Lights[Light Control]
    Detection --> Camera[Camera Activation]
    Detection --> Alarm[Alarm System]
    Detection --> Spray[Security Spray]
    Detection --> AutoDrone[Patrol Drone]
    Detection --> Entertainment[Entertainment Response]
    Entertainment --> Disco[Disco & Laser]
    Entertainment --> Robot[Home Robot]
    Entertainment --> Treats[Snacks & Drinks]
    
    %% Smart Home Systems
    SmartHome --> Climate[Climate Control]
    SmartHome --> Blinds[Blind Control]
    SmartHome --> Timer[Automation & Timers]
    SmartHome --> Integration[System Integration]
    SmartHome --> Access[Accessibility Features]
    SmartHome --> WaterLeak[Water Leak Detection]
    SmartHome --> PetID[Pet Identification]
    Access --> FlashLights[Door Signal Lights]
    Access --> Voice[Voice Recognition]
    
    %% Security Systems
    Security --> FortStyle[Fortress Security]
    Security --> Escape[Escape Room]
    Security --> Moat[Security Moat]
    Security --> Traps[Security Traps]
    Security --> RFID[GPS & RFID Tracking]

    %% Styling
    classDef hub fill:#f9f,stroke:#333,stroke-width:2px
    class Central,SmartHome,Security hub
´´´

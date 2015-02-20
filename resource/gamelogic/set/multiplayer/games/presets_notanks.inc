; == STANDARD ==
(define "standard_notanks"
	{common
		{unitset "inf_only"}
		{commandPoints "*=%cp"}
		{unitLimits "flamer=3;sniper=2;officer=1"}
		{chargeFactors "*=1"}
		{budgets
			{vehicle
				{mode "standard"}
				{resource 
					{start 		%start}
					{finish 	%finish}
					{growTime	1500}		; in seconds
					{growTable 	"0.65 0.65 0.65 0.70 0.70 0.70 0.75 0.75 0.75 0.80 0.80 0.80 0.80 0.80 0.80 0.85 0.85 0.85 0.90 0.90 0.90 0.90 0.90 0.90 1.00"}
					{payback
						{cp 		"0		25		50 		60		70		80		90"}  
						{restore 	"1.50	1.25	0.75	0.50	0.40	0.30	0.20"}
					}
				} 
				{buttons "squad1 squad2 v1 v2"}
			}
		} 
	}
)


; == CUSTOM ==
(define "custom_notanks"
	{common
		{unitset "inf_only"}
		{commandPoints "*=%cp"}
		{unitLimits "flamer=3;sniper=2;officer=1"}
		{chargeFactors "*=1"}
		{budgets
			{vehicle 
				{mode "custom"}
				{resource 
					{start 		%start}
					{finish 	%finish}
					{growTime	1500}		; in seconds
					{growTable 	"0.65 0.65 0.65 0.70 0.70 0.70 0.75 0.75 0.75 0.80 0.80 0.80 0.80 0.80 0.80 0.85 0.85 0.85 0.90 0.90 0.90 0.90 0.90 0.90 1.00"}
					{payback
						{cp 		"0		25		50 		60		70		80		90"}  
						{restore 	"1.50	1.25	0.75	0.50	0.40	0.30	0.20"}
					}
					{limitmin	1000}
					{limitmax	50000}
					{speedset 	"2500 3000 3500 4000 4500 5000 8000 10000 20000 50000"}
				} 
				{buttons "squad1 squad2 v1 v2"}
			}
		} 
	}
)


{presets		
	{"s:standard_80_notanks"	
		{gameMode "standard"}
		{unitMode "notanks"}
		{specMode "infantry_normal"}
		{apply "vehicles_xnotanks"}
		("standard_notanks" 		start(160) finish(3000) cp(100))
	}
	{"s:standard_120_notanks"	
		{gameMode "standard"}
		{unitMode "notanks"}
		{specMode "infantry_high"}
		{apply "vehicles_xnotanks"}
		("standard_notanks" 		start(600) finish(4000) cp(140))
	}
;--------------------------------------------------------------------------------------------
	{"c:custom_80_notanks"
		{gameMode "custom"}
		{unitMode "notanks"}
		{specMode "cp_80"}
		{apply "vehicles_xnotanks"}
		("custom_notanks" 		start(160) finish(3000) cp(80)) 
	}
	{"c:custom_100_notanks"
		{gameMode "custom"}
		{unitMode "notanks"}
		{specMode "cp_100"}
		{apply "vehicles_xnotanks"}
		("custom_notanks" 		start(160) finish(3000) cp(100))
	}
	{"c:custom_120_notanks"
		{gameMode "custom"}
		{unitMode "notanks"}
		{specMode "cp_120"}
		{apply "vehicles_xnotanks"}
		("custom_notanks" 		start(160) finish(3000) cp(120))
	}
	{"c:custom_140_notanks"
		{gameMode "custom"}
		{unitMode "notanks"}
		{specMode "cp_140"}
		{apply "vehicles_xnotanks"}
		("custom_notanks" 		start(160) finish(3000) cp(140))
	}
	{"c:custom_160_notanks"
		{gameMode "custom"}
		{unitMode "notanks"}
		{specMode "cp_160"}
		{apply "vehicles_xnotanks"}
		("custom_notanks" 		start(160) finish(3000) cp(160))
	}
	{"c:custom_180_notanks"
		{gameMode "custom"}
		{unitMode "notanks"}
		{specMode "cp_180"}
		{apply "vehicles_xnotanks"}
		("custom_notanks" 		start(160) finish(3000) cp(180))
	}	
;--------------------------------------------------------------------------------------------
}
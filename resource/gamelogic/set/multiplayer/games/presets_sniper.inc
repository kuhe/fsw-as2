; == STANDARD ==
(define "standard_snipers"
	{common
		{unitset "sniper_duell"}
		{commandPoints "*=%cp"}
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
				{buttons "squad2"}
			}
		} 
	}
)


; == CUSTOM ==
(define "custom_snipers"
	{common
		{unitset "sniper_duell"}
		{commandPoints "*=%cp"}
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
					{speedset 	"1000 1200 1500 1800 2100 2400 2800 3500"}
				} 
				{buttons "squad2"}
			}
		} 
	}
)


{presets		
	{"s:standard_3_snipers"	
		{gameMode "standard"}
		{unitMode "snipers"}
		{specMode "snipers_normal"}
		{apply "squads_expense"}
		("standard_snipers" 		start(120) finish(1500) cp(24))
	}
	{"s:standard_4_snipers"	
		{gameMode "standard"}
		{unitMode "snipers"}
		{specMode "snipers_high"}
		{apply "squads_expense"}
		("standard_snipers" 		start(280) finish(1800) cp(40))
	}
;--------------------------------------------------------------------------------------------
	{"c:custom_1_snipers"
		{gameMode "custom"}
		{unitMode "snipers"}
		{specMode "cp_sniper1"}
		{apply "squads_expense"}
		("custom_snipers" 		start(120) finish(1500) cp(8)) 
	}	
	{"c:custom_2_snipers"
		{gameMode "custom"}
		{unitMode "snipers"}
		{specMode "cp_sniper2"}
		{apply "squads_expense"}
		("custom_snipers" 		start(120) finish(1500) cp(16)) 
	}
	{"c:custom_3_snipers"
		{gameMode "custom"}
		{unitMode "snipers"}
		{specMode "cp_sniper3"}
		{apply "squads_expense"}
		("custom_snipers" 		start(120) finish(1500) cp(24))
	}
	{"c:custom_4_snipers"
		{gameMode "custom"}
		{unitMode "snipers"}
		{specMode "cp_sniper4"}
		{apply "squads_expense"}
		("custom_snipers" 		start(120) finish(1500) cp(32))
	}
	{"c:custom_5_snipers"
		{gameMode "custom"}
		{unitMode "snipers"}
		{specMode "cp_sniper5"}
		{apply "squads_expense"}
		("custom_snipers" 		start(120) finish(1500) cp(40))
	}
	{"c:custom_6_snipers"
		{gameMode "custom"}
		{unitMode "snipers"}
		{specMode "cp_sniper6"}
		{apply "squads_expense"}
		("custom_snipers" 		start(120) finish(1500) cp(48))
	}	
;--------------------------------------------------------------------------------------------
}
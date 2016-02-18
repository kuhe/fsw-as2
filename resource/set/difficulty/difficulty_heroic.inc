	{any
		{translate_damage 1}		; damage multiplier for landmines
		{cover_hitchance 0.03}   		; the probability of hitting a soldier behind cover
		{crawl_hitchance 0.45}  		; the probabiltiy of hitting a soldier in crawl position
		{cover_damage 0.45}  		; damage when protected by cover

		{vehicle_burst 10.5}			; increase timeout between bursts for all vehicles
		{cover_mgun_burst 3}		; increase bullet count in 1 burst of soldier with mgun in horizontal cover
		{cover_mgun_delay 0.2}		; decrease timeout between bursts of soldier with mgun in horizontal cover

		{cover_efficiency			; how cover efficiency will drop with distance
			0		0
			5		0.10
			15		0.25
			25		0.75
		}
		{blast_crawl 2.25}			; simply lying on the ground
		{blast_cover 8.00}          ; in cover from protected side
		{blast_crawl_prepared 3.00}	; lying on the ground & waiting for explosion
		{blast_cover_prepared 10.00}	; in cover not from protected side, but waiting for explosion
		{blast_squat 1.15}			; on the knees
		
		{mounted_mgun 0.5}
	}
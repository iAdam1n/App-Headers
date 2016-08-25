/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:14 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <BubbleMania/BubbleMania-Structs.h>
@interface PerformanceCategory : NSObject {

	BOOL hasLODChanged;
	S8CXXHashSet<DriveStar *>* driveStars;
	float priority;
	int currentLOD;
	int maxLOD;

}

@property (assign,nonatomic) float priority; 
@property (assign,nonatomic) int currentLOD; 
@property (assign,nonatomic) int maxLOD; 
-(void)setMaxLOD:(int)arg1 ;
-(BOOL)increaseLOD;
-(BOOL)decreaseLOD;
-(int)currentLOD;
-(void)setCurrentLOD:(int)arg1 ;
-(int)maxLOD;
-(void)updateLevelOfDetail;
-(void)addDriveStar:(id)arg1 ;
-(void)removeDriveStar:(id)arg1 ;
-(id)init;
-(float)priority;
-(void)setPriority:(float)arg1 ;
@end


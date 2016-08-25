/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:14 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <BubbleMania/BubbleMania-Structs.h>
@interface SelfRefreshDriveStarManager : NSObject {

	S8CXXArrayList<SRDSContainer>* driveStars;
	S8CXXHashMap<void *, void *, std::__1::hash<void *> >* containsMap;
	S8CXXHashMap<void *, double, std::__1::hash<void *> >* classTimes;
	int classTimeIterations;
	BOOL showStatistics;

}

@property (assign,nonatomic) BOOL showStatistics; 
+(id)instance;
-(BOOL)containsDriveStar:(id)arg1 ;
-(void)updateContainerFireTime:(SCD_Struct_Se199*)arg1 withTime:(double)arg2 ;
-(void)printStats;
-(void)clearClassTimes;
-(void)registerDriveStar:(id)arg1 ;
-(void)unregisterDriveStar:(id)arg1 ;
-(BOOL)showStatistics;
-(void)setShowStatistics:(BOOL)arg1 ;
-(id)init;
-(void)refreshAll;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:40:34 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/C946ECFA-6A29-41D3-8F69-02583A041494/Rummikub.app/Rummikub
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Rummikub/Rummikub-Structs.h>
#import <UIKit/UIAccelerometerDelegate.h>

@class NSMutableArray;

@interface MASTAccelerometer : NSObject <UIAccelerometerDelegate> {

	NSMutableArray* delegates;

}

@property (retain) NSMutableArray * delegates; 
+(id)sharedInstance;
+(void)releaseSharedInstance;
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)addDelegate:(id)arg1 ;
-(oneway void)superRelease;
-(id)retain;
-(id)init;
-(id)autorelease;
-(unsigned)retainCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)accelerometer:(id)arg1 didAccelerate:(id)arg2 ;
-(void)removeDelegate:(id)arg1 ;
-(NSMutableArray *)delegates;
-(void)setDelegates:(NSMutableArray *)arg1 ;
-(oneway void)release;
@end


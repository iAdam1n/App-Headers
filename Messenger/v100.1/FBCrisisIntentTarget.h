/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:31 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBIntentTarget.h>

@class NSString, FBMemCrisis;

@interface FBCrisisIntentTarget : FBIntentTarget {

	NSString* _crisisID;

}

@property (nonatomic,copy,readonly) FBMemCrisis * crisisID; 
@property (nonatomic,copy,readonly) NSString * crisisID;                 //@synthesize crisisID=_crisisID - In the implementation block
+(id)crisisTargetWithCrisisID:(id)arg1 ;
+(id)crisisTargetWithCrisis:(id)arg1 ;
-(id)fallbackURLs;
-(id)crisis;
-(FBMemCrisis *)crisisID;
@end

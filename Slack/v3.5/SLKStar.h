/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:56 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slack/_SLKStar.h>
#import <Slack/SLKGenerics.h>

@class SLKMessage, NSString, NSManagedObjectID, NSManagedObjectContext;

@interface SLKStar : _SLKStar <SLKGenerics> {

	unsigned long long _type;

}

@property (nonatomic,readonly) unsigned long long type;                                    //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) SLKMessage * message; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSString * tsid; 
@property (nonatomic,readonly) NSString * predicateKey; 
@property (nonatomic,readonly) unsigned long long contextType; 
@property (nonatomic,readonly) NSManagedObjectID * objectID; 
@property (nonatomic,readonly) NSManagedObjectContext * managedObjectContext; 
+(id)starForId:(id)arg1 contextType:(unsigned long long)arg2 dependencies:(id)arg3 ;
-(NSString *)predicateKey;
-(unsigned long long)type;
-(SLKMessage *)message;
@end


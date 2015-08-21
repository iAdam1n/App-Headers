/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:40 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/TBase.h>
#import <Messenger/NSCoding.h>

@class MNMessagesSyncThreadKey, NSString;

@interface MNMessagesSyncDeltaThreadAction : NSObject <TBase, NSCoding> {

	MNMessagesSyncThreadKey* __threadKey;
	int __action;
	BOOL __threadKey_isset;
	BOOL __action_isset;

}

@property (setter=setThreadKey:,getter=threadKey,nonatomic,retain) MNMessagesSyncThreadKey * threadKey; 
@property (assign,setter=setAction:,getter=action,nonatomic) int action; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(void)setThreadKey:(MNMessagesSyncThreadKey *)arg1 ;
-(BOOL)threadKeyIsSet;
-(void)unsetThreadKey;
-(id)initWithThreadKey:(id)arg1 action:(int)arg2 ;
-(BOOL)actionIsSet;
-(void)unsetAction;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(int)action;
-(void)validate;
-(void)setAction:(int)arg1 ;
-(void)write:(id)arg1 ;
-(MNMessagesSyncThreadKey *)threadKey;
@end


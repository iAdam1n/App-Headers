/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:48 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/NSCoding.h>

@protocol TFNMomentsTutorialPolicy, TFNMomentsTutorialManagerDelegate;
@class TFNMomentsTutorialState;

@interface TFNMomentsTutorialManager : NSObject <NSCoding> {

	BOOL _archiving;
	BOOL _needsSerialization;
	id<TFNMomentsTutorialPolicy> _policy;
	id<TFNMomentsTutorialManagerDelegate> _delegate;
	TFNMomentsTutorialState* _state;

}

@property (assign,getter=isArchiving,nonatomic) BOOL archiving;                                  //@synthesize archiving=_archiving - In the implementation block
@property (nonatomic,retain) id<TFNMomentsTutorialPolicy> policy;                                //@synthesize policy=_policy - In the implementation block
@property (assign,nonatomic,__weak) id<TFNMomentsTutorialManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) TFNMomentsTutorialState * state;                                    //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) BOOL needsSerialization;                                            //@synthesize needsSerialization=_needsSerialization - In the implementation block
+(id)unarchiveForAccount:(id)arg1 ;
+(id)_archiveFileNameForAccount:(id)arg1 ;
-(BOOL)shouldTriggerEvent:(unsigned long long)arg1 ;
-(void)didTriggerEvent:(unsigned long long)arg1 ;
-(void)willTriggerEvent:(unsigned long long)arg1 ;
-(void)setNeedsSerialization:(BOOL)arg1 ;
-(BOOL)needsSerialization;
-(void)archiveForAccount:(id)arg1 async:(BOOL)arg2 ;
-(BOOL)isArchiving;
-(void)setArchiving:(BOOL)arg1 ;
-(id<TFNMomentsTutorialPolicy>)policy;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<TFNMomentsTutorialManagerDelegate>)arg1 ;
-(id)init;
-(id<TFNMomentsTutorialManagerDelegate>)delegate;
-(TFNMomentsTutorialState *)state;
-(void)setState:(TFNMomentsTutorialState *)arg1 ;
-(void)reset;
-(void)setPolicy:(id<TFNMomentsTutorialPolicy>)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:56 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slack/BNCServerRequest.h>

@protocol BranchViewControllerDelegate;
@class NSString, NSDictionary;

@interface BranchUserCompletedActionRequest : BNCServerRequest {

	NSString* _action;
	NSDictionary* _state;
	id<BranchViewControllerDelegate> _branchViewcallback;

}

@property (nonatomic,retain) NSString * action;                                                //@synthesize action=_action - In the implementation block
@property (nonatomic,retain) NSDictionary * state;                                             //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) id<BranchViewControllerDelegate> branchViewcallback;              //@synthesize branchViewcallback=_branchViewcallback - In the implementation block
-(id)initWithAction:(id)arg1 state:(id)arg2 withBranchViewCallback:(id)arg3 ;
-(void)processResponse:(id)arg1 error:(id)arg2 ;
-(void)makeRequest:(id)arg1 key:(id)arg2 callback:(/*^block*/id)arg3 ;
-(id)initWithAction:(id)arg1 state:(id)arg2 ;
-(id<BranchViewControllerDelegate>)branchViewcallback;
-(void)setBranchViewcallback:(id<BranchViewControllerDelegate>)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDictionary *)state;
-(void)setState:(NSDictionary *)arg1 ;
-(NSString *)action;
-(void)setAction:(NSString *)arg1 ;
@end


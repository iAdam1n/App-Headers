/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:56 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface BranchView : NSObject {

	NSString* _branchViewID;
	NSString* _branchViewAction;
	long long _numOfUse;
	NSString* _webUrl;
	NSString* _webHtml;

}

@property (nonatomic,retain) NSString * branchViewID;                  //@synthesize branchViewID=_branchViewID - In the implementation block
@property (nonatomic,retain) NSString * branchViewAction;              //@synthesize branchViewAction=_branchViewAction - In the implementation block
@property (assign,nonatomic) long long numOfUse;                       //@synthesize numOfUse=_numOfUse - In the implementation block
@property (nonatomic,retain) NSString * webUrl;                        //@synthesize webUrl=_webUrl - In the implementation block
@property (nonatomic,retain) NSString * webHtml;                       //@synthesize webHtml=_webHtml - In the implementation block
-(void)setBranchViewAction:(NSString *)arg1 ;
-(void)setBranchViewID:(NSString *)arg1 ;
-(void)setNumOfUse:(long long)arg1 ;
-(void)setWebUrl:(NSString *)arg1 ;
-(void)setWebHtml:(NSString *)arg1 ;
-(NSString *)branchViewID;
-(long long)numOfUse;
-(id)initWithBranchView:(id)arg1 andActionName:(id)arg2 ;
-(void)updateUsageCount;
-(NSString *)branchViewAction;
-(NSString *)webUrl;
-(NSString *)webHtml;
-(BOOL)isAvailable;
@end


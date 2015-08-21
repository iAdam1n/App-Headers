/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:57 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/NSCopying.h>

@class NSString;

@interface FBReportingFlowResponseModel : FBValueObject <NSCopying> {

	BOOL _alreadyCompleted;
	BOOL _targetIsFixed;
	int _type;
	int _actionType;
	NSString* _completedSubtitle;
	NSString* _completedTitle;
	NSString* _confirmationSubtitle;
	NSString* _confirmationTitle;
	NSString* _subtitle;
	NSString* _title;
	NSString* _nodeID;
	NSString* _prefill;
	NSString* _targetName;
	NSString* _targetFBID;
	NSString* _urlString;

}

@property (nonatomic,readonly) BOOL alreadyCompleted;                             //@synthesize alreadyCompleted=_alreadyCompleted - In the implementation block
@property (nonatomic,copy,readonly) NSString * completedSubtitle;                 //@synthesize completedSubtitle=_completedSubtitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * completedTitle;                    //@synthesize completedTitle=_completedTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * confirmationSubtitle;              //@synthesize confirmationSubtitle=_confirmationSubtitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * confirmationTitle;                 //@synthesize confirmationTitle=_confirmationTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;                          //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                             //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) int type;                                          //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) int actionType;                                    //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,copy,readonly) NSString * nodeID;                            //@synthesize nodeID=_nodeID - In the implementation block
@property (nonatomic,readonly) BOOL targetIsFixed;                                //@synthesize targetIsFixed=_targetIsFixed - In the implementation block
@property (nonatomic,copy,readonly) NSString * prefill;                           //@synthesize prefill=_prefill - In the implementation block
@property (nonatomic,copy,readonly) NSString * targetName;                        //@synthesize targetName=_targetName - In the implementation block
@property (nonatomic,copy,readonly) NSString * targetFBID;                        //@synthesize targetFBID=_targetFBID - In the implementation block
@property (nonatomic,copy,readonly) NSString * urlString;                         //@synthesize urlString=_urlString - In the implementation block
-(BOOL)alreadyCompleted;
-(NSString *)completedSubtitle;
-(NSString *)completedTitle;
-(NSString *)prefill;
-(BOOL)targetIsFixed;
-(NSString *)targetFBID;
-(NSString *)confirmationSubtitle;
-(id)initWithAlreadyCompleted:(BOOL)arg1 completedSubtitle:(id)arg2 completedTitle:(id)arg3 confirmationSubtitle:(id)arg4 confirmationTitle:(id)arg5 subtitle:(id)arg6 title:(id)arg7 type:(int)arg8 actionType:(int)arg9 nodeID:(id)arg10 targetIsFixed:(BOOL)arg11 prefill:(id)arg12 targetName:(id)arg13 targetFBID:(id)arg14 urlString:(id)arg15 ;
-(int)type;
-(NSString *)title;
-(NSString *)subtitle;
-(NSString *)urlString;
-(int)actionType;
-(NSString *)nodeID;
-(NSString *)confirmationTitle;
-(NSString *)targetName;
@end


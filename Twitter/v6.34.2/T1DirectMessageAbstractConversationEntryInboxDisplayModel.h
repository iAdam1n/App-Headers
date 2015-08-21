/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:29 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol TFNDirectMessageConversationEntry, TFNDirectMessageConversation;
@class TFNTwitterAccount, TFNAttributedTextModel, NSString, UIFont, UIColor, NSAttributedString;

@interface T1DirectMessageAbstractConversationEntryInboxDisplayModel : NSObject {

	BOOL _roundedUIEnabled;
	id<TFNDirectMessageConversationEntry> _entry;
	id<TFNDirectMessageConversation> _conversation;
	TFNTwitterAccount* _account;
	TFNAttributedTextModel* _displayTextModel;

}

@property (nonatomic,copy,readonly) NSString * displayText; 
@property (nonatomic,readonly) UIFont * displayFont; 
@property (nonatomic,readonly) id<TFNDirectMessageConversationEntry> entry;                  //@synthesize entry=_entry - In the implementation block
@property (nonatomic,readonly) id<TFNDirectMessageConversation> conversation;                //@synthesize conversation=_conversation - In the implementation block
@property (nonatomic,readonly) TFNTwitterAccount * account;                                  //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) TFNAttributedTextModel * displayTextModel;                      //@synthesize displayTextModel=_displayTextModel - In the implementation block
@property (nonatomic,readonly) UIColor * backgroundColor; 
@property (nonatomic,readonly) UIColor * foregroundColor; 
@property (nonatomic,readonly) NSAttributedString * attributedDisplayText; 
@property (getter=isRoundedUIEnabled,nonatomic,readonly) BOOL roundedUIEnabled;              //@synthesize roundedUIEnabled=_roundedUIEnabled - In the implementation block
+(unsigned long long)inboxEntryTypes;
+(id)displayModelWithEntry:(id)arg1 conversation:(id)arg2 account:(id)arg3 ;
+(double)messageLineHeight;
+(double)displayTextHeight;
+(id)messageFont;
+(unsigned long long)maxLines;
-(NSAttributedString *)attributedDisplayText;
-(BOOL)isRoundedUIEnabled;
-(id)initWithEntry:(id)arg1 conversation:(id)arg2 account:(id)arg3 ;
-(TFNAttributedTextModel *)displayTextModel;
-(UIFont *)displayFont;
-(void)setDisplayTextModel:(TFNAttributedTextModel *)arg1 ;
-(NSString *)displayText;
-(UIColor *)backgroundColor;
-(id)init;
-(UIColor *)foregroundColor;
-(id<TFNDirectMessageConversation>)conversation;
-(TFNTwitterAccount *)account;
-(id<TFNDirectMessageConversationEntry>)entry;
@end


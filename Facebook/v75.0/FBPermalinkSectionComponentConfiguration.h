/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:05 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FBCommentStreamCellStyle, FBUFICommentLayoutDefinition, NSDictionary, FBMemFeedStory, NSSet, FBCommentStreamInlineReplyExpansionUIOptions, FBNotificationsLoggingContext, NSArray;

@interface FBPermalinkSectionComponentConfiguration : FBValueObject <NSCopying> {

	BOOL _shouldShowNoCommentIndicator;
	NSString* _analyticsModule;
	NSString* _analyticsUUID;
	FBCommentStreamCellStyle* _cellStyle;
	FBUFICommentLayoutDefinition* _commentCellConfiguration;
	NSDictionary* _extraAnalyticsData;
	FBMemFeedStory* _feedStory;
	NSString* _feedStoryGraphAPIID;
	NSString* _feedStoryGraphQLID;
	NSString* _focusedCommentID;
	NSString* _focusedReplyID;
	NSSet* _highlightedWords;
	FBCommentStreamInlineReplyExpansionUIOptions* _inlineReplyExpansionOptions;
	unsigned long long _layoutIdiom;
	NSString* _notificationType;
	FBNotificationsLoggingContext* _notificationsLoggingContext;
	NSArray* _parentTrackingCodes;
	unsigned long long _resharePreviewStyle;
	unsigned long long _socialSentenceType;
	NSString* _viewerFBID;

}

@property (nonatomic,copy,readonly) NSString * analyticsModule;                                                              //@synthesize analyticsModule=_analyticsModule - In the implementation block
@property (nonatomic,copy,readonly) NSString * analyticsUUID;                                                                //@synthesize analyticsUUID=_analyticsUUID - In the implementation block
@property (nonatomic,copy,readonly) FBCommentStreamCellStyle * cellStyle;                                                    //@synthesize cellStyle=_cellStyle - In the implementation block
@property (nonatomic,copy,readonly) FBUFICommentLayoutDefinition * commentCellConfiguration;                                 //@synthesize commentCellConfiguration=_commentCellConfiguration - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * extraAnalyticsData;                                                       //@synthesize extraAnalyticsData=_extraAnalyticsData - In the implementation block
@property (nonatomic,copy,readonly) FBMemFeedStory * feedStory;                                                              //@synthesize feedStory=_feedStory - In the implementation block
@property (nonatomic,copy,readonly) NSString * feedStoryGraphAPIID;                                                          //@synthesize feedStoryGraphAPIID=_feedStoryGraphAPIID - In the implementation block
@property (nonatomic,copy,readonly) NSString * feedStoryGraphQLID;                                                           //@synthesize feedStoryGraphQLID=_feedStoryGraphQLID - In the implementation block
@property (nonatomic,copy,readonly) NSString * focusedCommentID;                                                             //@synthesize focusedCommentID=_focusedCommentID - In the implementation block
@property (nonatomic,copy,readonly) NSString * focusedReplyID;                                                               //@synthesize focusedReplyID=_focusedReplyID - In the implementation block
@property (nonatomic,copy,readonly) NSSet * highlightedWords;                                                                //@synthesize highlightedWords=_highlightedWords - In the implementation block
@property (nonatomic,copy,readonly) FBCommentStreamInlineReplyExpansionUIOptions * inlineReplyExpansionOptions;              //@synthesize inlineReplyExpansionOptions=_inlineReplyExpansionOptions - In the implementation block
@property (nonatomic,readonly) unsigned long long layoutIdiom;                                                               //@synthesize layoutIdiom=_layoutIdiom - In the implementation block
@property (nonatomic,copy,readonly) NSString * notificationType;                                                             //@synthesize notificationType=_notificationType - In the implementation block
@property (nonatomic,copy,readonly) FBNotificationsLoggingContext * notificationsLoggingContext;                             //@synthesize notificationsLoggingContext=_notificationsLoggingContext - In the implementation block
@property (nonatomic,copy,readonly) NSArray * parentTrackingCodes;                                                           //@synthesize parentTrackingCodes=_parentTrackingCodes - In the implementation block
@property (nonatomic,readonly) unsigned long long resharePreviewStyle;                                                       //@synthesize resharePreviewStyle=_resharePreviewStyle - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowNoCommentIndicator;                                                            //@synthesize shouldShowNoCommentIndicator=_shouldShowNoCommentIndicator - In the implementation block
@property (nonatomic,readonly) unsigned long long socialSentenceType;                                                        //@synthesize socialSentenceType=_socialSentenceType - In the implementation block
@property (nonatomic,copy,readonly) NSString * viewerFBID;                                                                   //@synthesize viewerFBID=_viewerFBID - In the implementation block
-(unsigned long long)layoutIdiom;
-(NSString *)analyticsModule;
-(FBMemFeedStory *)feedStory;
-(NSString *)analyticsUUID;
-(NSString *)viewerFBID;
-(NSString *)focusedCommentID;
-(NSSet *)highlightedWords;
-(NSDictionary *)extraAnalyticsData;
-(NSString *)feedStoryGraphAPIID;
-(NSString *)feedStoryGraphQLID;
-(FBNotificationsLoggingContext *)notificationsLoggingContext;
-(NSArray *)parentTrackingCodes;
-(id)initWithAnalyticsModule:(id)arg1 analyticsUUID:(id)arg2 cellStyle:(id)arg3 commentCellConfiguration:(id)arg4 extraAnalyticsData:(id)arg5 feedStory:(id)arg6 feedStoryGraphAPIID:(id)arg7 feedStoryGraphQLID:(id)arg8 focusedCommentID:(id)arg9 focusedReplyID:(id)arg10 highlightedWords:(id)arg11 inlineReplyExpansionOptions:(id)arg12 layoutIdiom:(unsigned long long)arg13 notificationType:(id)arg14 notificationsLoggingContext:(id)arg15 parentTrackingCodes:(id)arg16 resharePreviewStyle:(unsigned long long)arg17 shouldShowNoCommentIndicator:(BOOL)arg18 socialSentenceType:(unsigned long long)arg19 viewerFBID:(id)arg20 ;
-(NSString *)focusedReplyID;
-(FBCommentStreamInlineReplyExpansionUIOptions *)inlineReplyExpansionOptions;
-(FBUFICommentLayoutDefinition *)commentCellConfiguration;
-(unsigned long long)socialSentenceType;
-(unsigned long long)resharePreviewStyle;
-(BOOL)shouldShowNoCommentIndicator;
-(FBCommentStreamCellStyle *)cellStyle;
-(NSString *)notificationType;
@end

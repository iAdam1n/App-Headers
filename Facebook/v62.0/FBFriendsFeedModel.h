/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:31 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FBFriendsFeedModel : NSObject {

	BOOL _inFeedComposerSupported;
	NSString* _feedStyle;
	NSString* _feedComposerPlaceholder;

}

@property (nonatomic,copy,readonly) NSString * feedStyle;                            //@synthesize feedStyle=_feedStyle - In the implementation block
@property (nonatomic,copy,readonly) NSString * feedComposerPlaceholder;              //@synthesize feedComposerPlaceholder=_feedComposerPlaceholder - In the implementation block
@property (nonatomic,readonly) BOOL inFeedComposerSupported;                         //@synthesize inFeedComposerSupported=_inFeedComposerSupported - In the implementation block
-(id)initWithFeedStyle:(id)arg1 feedComposerPlaceholder:(id)arg2 inFeedComposerSupported:(BOOL)arg3 ;
-(NSString *)feedStyle;
-(NSString *)feedComposerPlaceholder;
-(BOOL)inFeedComposerSupported;
@end

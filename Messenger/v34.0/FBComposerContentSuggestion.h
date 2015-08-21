/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:44 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/NSCopying.h>
#import <Messenger/NSCoding.h>

@class NSString, NSURL, FBComposerSuggestedContent;

@interface FBComposerContentSuggestion : FBValueObject <NSCopying, NSCoding> {

	NSString* _title;
	NSString* _subtitle;
	NSURL* _imageURL;
	FBComposerSuggestedContent* _suggestedContent;

}

@property (nonatomic,copy,readonly) NSString * title;                                           //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;                                        //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy,readonly) NSURL * imageURL;                                           //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,copy,readonly) FBComposerSuggestedContent * suggestedContent;              //@synthesize suggestedContent=_suggestedContent - In the implementation block
-(FBComposerSuggestedContent *)suggestedContent;
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 imageURL:(id)arg3 suggestedContent:(id)arg4 ;
-(NSString *)title;
-(NSString *)subtitle;
-(NSURL *)imageURL;
@end


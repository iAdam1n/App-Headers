/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:02 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBMemGroup, FBInlineComposerViewSpecifier;

@interface FBGroupFeedHeaderSectionComponentState : NSObject {

	BOOL _shouldShowRelatedGroupSuggestions;
	FBMemGroup* _group;
	FBInlineComposerViewSpecifier* _inlineComposerViewSpecifier;

}

@property (nonatomic,readonly) FBMemGroup * group;                                                       //@synthesize group=_group - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowRelatedGroupSuggestions;                                   //@synthesize shouldShowRelatedGroupSuggestions=_shouldShowRelatedGroupSuggestions - In the implementation block
@property (nonatomic,readonly) FBInlineComposerViewSpecifier * inlineComposerViewSpecifier;              //@synthesize inlineComposerViewSpecifier=_inlineComposerViewSpecifier - In the implementation block
-(id)initWithGroup:(id)arg1 shouldShowRelatedGroupSuggestions:(BOOL)arg2 inlineComposerViewSpecifier:(id)arg3 ;
-(BOOL)shouldShowRelatedGroupSuggestions;
-(FBInlineComposerViewSpecifier *)inlineComposerViewSpecifier;
-(FBMemGroup *)group;
@end

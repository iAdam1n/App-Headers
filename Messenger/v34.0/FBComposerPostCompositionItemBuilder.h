/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:42 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString, FBComposerPostCompositionIcon, FBComposerPostCompositionItemAction, FBComposerAccessibilityPayload;

@interface FBComposerPostCompositionItemBuilder : NSObject {

	NSString* _title;
	NSString* _subtitle;
	FBComposerPostCompositionIcon* _icon;
	BOOL _isEnabled;
	BOOL _isSelected;
	FBComposerPostCompositionItemAction* _action;
	unsigned long long _contentImportance;
	FBComposerAccessibilityPayload* _accessibilityPayload;

}
+(id)composerPostCompositionItem;
+(id)composerPostCompositionItemFromExistingComposerPostCompositionItem:(id)arg1 ;
-(id)withTitle:(id)arg1 ;
-(id)withAction:(id)arg1 ;
-(id)withIcon:(id)arg1 ;
-(id)withAccessibilityPayload:(id)arg1 ;
-(id)withSubtitle:(id)arg1 ;
-(id)withIsEnabled:(BOOL)arg1 ;
-(id)withIsSelected:(BOOL)arg1 ;
-(id)withContentImportance:(unsigned long long)arg1 ;
-(id)build;
@end


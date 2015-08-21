/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:50 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/MNComposerExtensionOverflowStrategy.h>

@protocol MNComposerExtension;
@class NSArray, MNComposerOverflowExtension, NSString;

@interface MNComposerExtensionReplaceLastTabOverflowStrategy : NSObject <MNComposerExtensionOverflowStrategy> {

	NSArray* _extensionsToDisplay;
	long long _numberOfExtensionsToDisplay;
	id<MNComposerExtension> _lastNonOverflowingExtension;
	id<MNComposerExtension> _selectedExtension;
	NSArray* _overflowExtensions;
	MNComposerOverflowExtension* _overflowExtension;
	NSArray* _extensions;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) MNComposerOverflowExtension * overflowExtension;              //@synthesize overflowExtension=_overflowExtension - In the implementation block
@property (nonatomic,copy) NSArray * extensions;                                             //@synthesize extensions=_extensions - In the implementation block
@property (nonatomic,copy,readonly) NSArray * extensionsToDisplay;                           //@synthesize extensionsToDisplay=_extensionsToDisplay - In the implementation block
-(void)_updateNumberOfExtensionsToDisplay;
-(unsigned long long)_maxNumberOfNonOverflowingExtensionsToDisplay;
-(id)initWithOverflowExtension:(id)arg1 ;
-(void)setNumberOfExtensionsToDisplay:(long long)arg1 ;
-(unsigned long long)numberOfExtensionsNeedsDisplay;
-(unsigned long long)indexOfExtensionInExtensionsToDisplay:(id)arg1 ;
-(BOOL)extensionIsInOverflow:(id)arg1 ;
-(void)setSelectedExtension:(id)arg1 ;
-(MNComposerOverflowExtension *)overflowExtension;
-(NSArray *)extensionsToDisplay;
-(void)_updateExtensionsToDisplay;
-(void)_updateLastNonOverflowingExtension;
-(void)_updateSelectedExtension;
-(id)init;
-(void)setExtensions:(NSArray *)arg1 ;
-(NSArray *)extensions;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:12 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/FBFIGConfigurable.h>
#import <Messenger/FBFIGThreadSafeSizable.h>

@class NSString, UIImageView, UILabel;

@interface FBBadgeView : UIView <FBFIGConfigurable, FBFIGThreadSafeSizable> {

	NSString* _accessibilityFormat;
	UIImageView* _badgeView;
	UILabel* _countLabel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultFIGConfig;
+(id)badgeImageWithSize:(CGSize)arg1 cornerRadius:(double)arg2 color:(id)arg3 ;
+(id)_badgeCountAttributedStringForConfig:(id)arg1 ;
+(CGSize)_threadSafeSizeThatFits:(id)arg1 size:(CGSize)arg2 attributedString:(id)arg3 ;
+(id)newWithConfig:(id)arg1 ;
+(CGSize)threadSafeSizeThatFits:(id)arg1 size:(CGSize)arg2 ;
+(id)newWithStyle:(unsigned long long)arg1 ;
+(id)newWithStyle:(unsigned long long)arg1 maxBadgeCount:(long long)arg2 ;
+(void)initialize;
-(void)oldConfig:(id)arg1 configDidChange:(id)arg2 ;
-(void)_setUpBadgeView;
-(void)_setUpCountLabel;
-(void)_setUpAccessibility;
-(CGSize)threadSafeSizeThatFits:(CGSize)arg1 ;
-(void)applyConfig:(id)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)_init;
-(id)config;
@end


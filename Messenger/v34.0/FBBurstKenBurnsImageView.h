/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:34 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <Messenger/FBKenBurnsAnimatorViewDataSource.h>

@class FBKenBurnsAnimatorView, FBBurstAnimationImageViewSpecifier, NSArray, NSString;

@interface FBBurstKenBurnsImageView : UIView <FBKenBurnsAnimatorViewDataSource> {

	FBKenBurnsAnimatorView* _kenBurnsView;
	FBBurstAnimationImageViewSpecifier* _previousViewSpecifier;
	NSArray* _imageSpecifiers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)kenBurnsAnimatorView:(id)arg1 viewToBeShownAfterView:(id)arg2 ;
-(void)setViewSpecifier:(id)arg1 ;
-(void)restorePreviousViewSpecifier;
-(void)layoutSubviews;
-(void)clear;
-(void)setUp;
@end

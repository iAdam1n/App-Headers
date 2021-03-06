/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:38 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <UIKit/UIView.h>
#import <Telegram/TGModernGalleryDefaultHeaderView.h>

@class UILabel, NSString;

@interface TGGenericPeerMediaGalleryDefaultHeaderView : UIView <TGModernGalleryDefaultHeaderView> {

	UILabel* _titleLabel;
	/*^block*/id _positionAndCountBlock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPositionAndCountBlock:(/*^block*/id)arg1 ;
-(CGRect)titleFrameForSize:(CGSize)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setItem:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:05 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <UIKit/UIToolbar.h>

@class UIImageView, UIButton;

@interface WAMediaPickerToolbar : UIToolbar {

	UIImageView* _middleSeparatorView;
	UIButton* _insertItemButton;
	UIButton* _insertGIFButton;

}

@property (nonatomic,readonly) UIButton * insertItemButton;              //@synthesize insertItemButton=_insertItemButton - In the implementation block
@property (nonatomic,readonly) UIButton * insertGIFButton;               //@synthesize insertGIFButton=_insertGIFButton - In the implementation block
+(BOOL)showsInsertFromButton;
-(UIButton *)insertItemButton;
-(UIButton *)insertGIFButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end


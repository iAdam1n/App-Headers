/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, ECCASMerchantActionRowLinkLabel;

@interface ECAdCASMerchantActionRow : UIView {

	UIImageView* _iconView;
	ECCASMerchantActionRowLinkLabel* _label;
	/*^block*/id _handler;

}

@property (nonatomic,retain) UIImageView * iconView;                               //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) ECCASMerchantActionRowLinkLabel * label;              //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) id handler;                                             //@synthesize handler=_handler - In the implementation block
-(void)handleGestureTap:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 icon:(id)arg2 text:(id)arg3 handler:(/*^block*/id)arg4 ;
-(BOOL)hasHandler;
-(ECCASMerchantActionRowLinkLabel *)label;
-(void)setLabel:(ECCASMerchantActionRowLinkLabel *)arg1 ;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(UIImageView *)iconView;
-(void)setIconView:(UIImageView *)arg1 ;
-(void)setupConstraints;
@end

/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:52 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/ECValidatingTableViewCell.h>

@class ECBorderlessButton;

@interface ECValidatingButtonTableViewCell : ECValidatingTableViewCell {

	ECBorderlessButton* _button;
	/*^block*/id _tapHandler;

}

@property (nonatomic,retain) ECBorderlessButton * button;              //@synthesize button=_button - In the implementation block
@property (nonatomic,copy) id tapHandler;                              //@synthesize tapHandler=_tapHandler - In the implementation block
+(double)defaultCellHeight;
-(void)handleButtonTap:(id)arg1 ;
-(void)setDefaults;
-(void)setTapHandler:(id)arg1 ;
-(id)tapHandler;
-(ECBorderlessButton *)button;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setButton:(ECBorderlessButton *)arg1 ;
-(void)handleTap:(id)arg1 ;
@end


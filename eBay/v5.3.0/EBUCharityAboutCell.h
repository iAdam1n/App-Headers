/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UILabel;

@interface EBUCharityAboutCell : UITableViewCell {

	UILabel* _locationLabel;
	UILabel* _location;
	UILabel* _mission;

}

@property (assign,nonatomic,__weak) UILabel * locationLabel;              //@synthesize locationLabel=_locationLabel - In the implementation block
@property (assign,nonatomic,__weak) UILabel * location;                   //@synthesize location=_location - In the implementation block
@property (assign,nonatomic,__weak) UILabel * mission;                    //@synthesize mission=_mission - In the implementation block
+(id)reuseIdentifier;
-(double)optimalHeight;
-(void)setupWithCharity:(id)arg1 ;
-(UILabel *)mission;
-(void)setMission:(UILabel *)arg1 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)awakeFromNib;
-(UILabel *)location;
-(void)setLocation:(UILabel *)arg1 ;
-(UILabel *)locationLabel;
-(void)setLocationLabel:(UILabel *)arg1 ;
@end

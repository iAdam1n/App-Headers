/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:55 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UILabel, UIImageView;

@interface WAWebClientSessionTableViewCell : UITableViewCell {

	UILabel* _lastActiveLabel;
	UILabel* _locationLabel;
	UILabel* _operatingSystemLabel;
	UIImageView* _iconImageView;

}

@property (assign,nonatomic,__weak) UILabel * lastActiveLabel;                   //@synthesize lastActiveLabel=_lastActiveLabel - In the implementation block
@property (assign,nonatomic,__weak) UILabel * locationLabel;                     //@synthesize locationLabel=_locationLabel - In the implementation block
@property (assign,nonatomic,__weak) UILabel * operatingSystemLabel;              //@synthesize operatingSystemLabel=_operatingSystemLabel - In the implementation block
@property (assign,nonatomic,__weak) UIImageView * iconImageView;                 //@synthesize iconImageView=_iconImageView - In the implementation block
-(void)setIconImageForBrowserName:(id)arg1 ;
-(UILabel *)lastActiveLabel;
-(void)setLastActiveLabel:(UILabel *)arg1 ;
-(UILabel *)operatingSystemLabel;
-(void)setOperatingSystemLabel:(UILabel *)arg1 ;
-(UIImageView *)iconImageView;
-(void)setIconImageView:(UIImageView *)arg1 ;
-(UILabel *)locationLabel;
-(void)setLocationLabel:(UILabel *)arg1 ;
@end

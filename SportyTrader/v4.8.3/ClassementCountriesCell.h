/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:00 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel;

@interface ClassementCountriesCell : UITableViewCell {

	UIImageView* logoImagePays;
	UILabel* nomPaysLabel;
	UILabel* nomsChampionnatsLabel;

}

@property (nonatomic,retain) UIImageView * logoImagePays; 
@property (nonatomic,retain) UILabel * nomPaysLabel; 
@property (nonatomic,retain) UILabel * nomsChampionnatsLabel; 
-(UILabel *)nomPaysLabel;
-(void)setPaysLogo:(id)arg1 forSport:(int)arg2 ;
-(UIImageView *)logoImagePays;
-(void)setLogoImagePays:(UIImageView *)arg1 ;
-(void)setNomPaysLabel:(UILabel *)arg1 ;
-(UILabel *)nomsChampionnatsLabel;
-(void)setNomsChampionnatsLabel:(UILabel *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:22 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel;

@interface ResultatsCountriesCell : UITableViewCell {

	UIImageView* paysImageView;
	UILabel* nomPaysLabel;
	UILabel* nbMatchLabel;
	UILabel* nbMatchsLiveLabel;

}

@property (nonatomic,retain) UIImageView * paysImageView; 
@property (nonatomic,retain) UILabel * nomPaysLabel; 
@property (nonatomic,retain) UILabel * nbMatchLabel; 
@property (nonatomic,retain) UILabel * nbMatchsLiveLabel; 
-(UILabel *)nomPaysLabel;
-(UILabel *)nbMatchLabel;
-(UILabel *)nbMatchsLiveLabel;
-(UIImageView *)paysImageView;
-(void)setPaysLogo:(id)arg1 ;
-(void)setNbMatchsLiveLabel:(UILabel *)arg1 ;
-(void)setNomPaysLabel:(UILabel *)arg1 ;
-(void)setPaysImageView:(UIImageView *)arg1 ;
-(void)setNbMatchLabel:(UILabel *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
@end

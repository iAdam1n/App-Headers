/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:23:36 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/4CADE18B-4AB7-484E-AA99-AF6CAB7B8341/Palaver.app/Palaver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Palaver/PLVTableViewCell.h>

@class UILabel;

@interface PLVQueryListCell : PLVTableViewCell {

	 queryLabel;
	 unreadLabel;

}

@property (assign,__weak,nonatomic) UILabel * queryLabel; 
@property (assign,__weak,nonatomic) UILabel * unreadLabel; 
-(UILabel *)queryLabel;
-(UILabel *)unreadLabel;
-(void)setQueryLabel:(UILabel *)arg1 ;
-(void)setUnreadLabel:(UILabel *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)awakeFromNib;
@end


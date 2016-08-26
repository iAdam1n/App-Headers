/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:42 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/SolitaireFree-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UILabel, TrophyView, TrophyArchive;

@interface TrophyDetailView : UIView {

	UIImageView* backgroundView;
	UILabel* monthLabel;
	UILabel* progressLabel;
	UILabel* amountLabel;
	TrophyView* trophyView;
	BOOL _isCurrentMonth;
	int _rotationType;

}

@property (retain) TrophyArchive * trophyArchive; 
@property (assign) int rotationType;                           //@synthesize rotationType=_rotationType - In the implementation block
@property (assign) BOOL isCurrentMonth;                        //@synthesize isCurrentMonth=_isCurrentMonth - In the implementation block
-(void)layoutUI;
-(void)setRotationType:(int)arg1 ;
-(int)rotationType;
-(BOOL)isCurrentMonth;
-(void)setIsCurrentMonth:(BOOL)arg1 ;
-(void)setTrophyArchive:(TrophyArchive *)arg1 ;
-(TrophyArchive *)trophyArchive;
-(id)init;
-(void)setFrame:(CGRect)arg1 ;
@end

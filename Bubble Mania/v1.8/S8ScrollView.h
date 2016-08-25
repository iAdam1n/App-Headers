/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:13 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/BubbleMania-Structs.h>
#import <UIKit/UIScrollView.h>

@class NSMutableArray;

@interface S8ScrollView : UIScrollView {

	unsigned numberOfRows;
	double height;
	double arrayStart;
	NSMutableArray* arraySubviews;
	NSMutableArray* priorSubviews;

}

@property (assign,nonatomic) unsigned numberOfRows; 
@property (assign,nonatomic) double height; 
@property (assign,nonatomic) double arrayStart; 
@property (nonatomic,retain) NSMutableArray * arraySubviews; 
@property (nonatomic,retain) NSMutableArray * priorSubviews; 
-(void)setArraySubviews:(NSMutableArray *)arg1 ;
-(void)setPriorSubviews:(NSMutableArray *)arg1 ;
-(void)setArrayStart:(double)arg1 ;
-(void)redrawView;
-(double)getSubviewSizeOverNumberOfRows:(unsigned)arg1 ;
-(CGRect)CGRectForIndex:(long long)arg1 ;
-(CGRect)CGRectOfPriorViewForIndex:(long long)arg1 ;
-(void)redrawArrayViews;
-(double)getSubviewSize;
-(NSMutableArray *)arraySubviews;
-(double)arrayStart;
-(void)placeViewInGrid:(id)arg1 ;
-(void)placePriorView:(id)arg1 ;
-(NSMutableArray *)priorSubviews;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)willRemoveSubview:(id)arg1 ;
-(unsigned)numberOfRows;
-(double)height;
-(void)setNumberOfRows:(unsigned)arg1 ;
-(void)setHeight:(double)arg1 ;
-(void)setDefaults;
@end


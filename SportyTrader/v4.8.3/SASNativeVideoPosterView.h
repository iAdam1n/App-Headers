/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:01 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/SportyTrader-Structs.h>
#import <UIKit/UIImageView.h>

@class NSOperationQueue;

@interface SASNativeVideoPosterView : UIImageView {

	NSOperationQueue* _backgroundQueue;

}

@property (nonatomic,retain) NSOperationQueue * backgroundQueue;              //@synthesize backgroundQueue=_backgroundQueue - In the implementation block
-(void)loadImageFromURL:(id)arg1 ;
-(void)resetBackgroundQueue;
-(void)setBackgroundQueue:(NSOperationQueue *)arg1 ;
-(void)initBackgroundQueue;
-(void)loadImageFromOffset:(id)arg1 withAsset:(id)arg2 duration:(SCD_Struct_SA23)arg3 ;
-(void)dealloc;
-(NSOperationQueue *)backgroundQueue;
@end


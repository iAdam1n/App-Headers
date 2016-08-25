/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:44 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TSWKClickAction, NSString, NSArray;

@interface TSWatchKitData : NSObject {

	BOOL _shouldPreloadImage;
	BOOL _presentModally;
	TSWKClickAction* _clickAction;
	NSString* _contextMenuClickTrackingUrl;
	NSArray* _contextMenuItems;
	NSArray* _pages;
	NSString* _currentPageId;

}

@property (nonatomic,retain) TSWKClickAction * clickAction;                       //@synthesize clickAction=_clickAction - In the implementation block
@property (nonatomic,retain) NSString * contextMenuClickTrackingUrl;              //@synthesize contextMenuClickTrackingUrl=_contextMenuClickTrackingUrl - In the implementation block
@property (nonatomic,retain) NSArray * contextMenuItems;                          //@synthesize contextMenuItems=_contextMenuItems - In the implementation block
@property (nonatomic,retain) NSArray * pages;                                     //@synthesize pages=_pages - In the implementation block
@property (assign,nonatomic) BOOL shouldPreloadImage;                             //@synthesize shouldPreloadImage=_shouldPreloadImage - In the implementation block
@property (nonatomic,retain) NSString * currentPageId;                            //@synthesize currentPageId=_currentPageId - In the implementation block
@property (assign,nonatomic) BOOL presentModally;                                 //@synthesize presentModally=_presentModally - In the implementation block
-(void)setClickAction:(TSWKClickAction *)arg1 ;
-(NSString *)contextMenuClickTrackingUrl;
-(void)setContextMenuClickTrackingUrl:(NSString *)arg1 ;
-(NSArray *)contextMenuItems;
-(void)setContextMenuItems:(NSArray *)arg1 ;
-(BOOL)shouldPreloadImage;
-(void)setShouldPreloadImage:(BOOL)arg1 ;
-(NSString *)currentPageId;
-(void)setCurrentPageId:(NSString *)arg1 ;
-(BOOL)presentModally;
-(void)setPresentModally:(BOOL)arg1 ;
-(TSWKClickAction *)clickAction;
-(NSArray *)pages;
-(void)setPages:(NSArray *)arg1 ;
@end


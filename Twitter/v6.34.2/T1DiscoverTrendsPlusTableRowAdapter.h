/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:34 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNItemsTableRowAdapter.h>

@interface T1DiscoverTrendsPlusTableRowAdapter : TFNItemsTableRowAdapter {

	BOOL _showSeparator;

}

@property (assign,getter=shouldShowSeparator,nonatomic) BOOL showSeparator;              //@synthesize showSeparator=_showSeparator - In the implementation block
+(void)_dataViewController:(id)arg1 presentSearchForTrend:(id)arg2 atIndexPath:(id)arg3 ;
-(id)dataViewController:(id)arg1 tableViewCellForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4 ;
-(void)dataViewController:(id)arg1 didSelectItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4 ;
-(BOOL)shouldShowSeparator;
-(void)setShowSeparator:(BOOL)arg1 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:25 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/TFNLayoutableViewLayoutDelegate.h>

@class NSString;

@interface T1NativeSummaryCardDetailViewLayoutDelegate : NSObject <TFNLayoutableViewLayoutDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedLayoutDelegate;
+(id)layoutStateWithTitle:(id)arg1 description:(id)arg2 imageSize:(CGSize)arg3 isWide:(BOOL)arg4 forBounds:(CGRect)arg5 ;
+(id)layoutStateForView:(id)arg1 bounds:(CGRect)arg2 ;
-(void)layoutSubviewsForLayoutableView:(id)arg1 ;
-(CGSize)layoutableView:(id)arg1 sizeThatFits:(CGSize)arg2 ;
@end


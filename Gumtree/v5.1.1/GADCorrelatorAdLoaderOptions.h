/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <Gumtree/GADAdLoaderOptions.h>

@class GADCorrelator;

@interface GADCorrelatorAdLoaderOptions : GADAdLoaderOptions {

	GADCorrelator* _correlator;

}

@property (nonatomic,retain) GADCorrelator * correlator;              //@synthesize correlator=_correlator - In the implementation block
-(GADCorrelator *)correlator;
-(void)setCorrelator:(GADCorrelator *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

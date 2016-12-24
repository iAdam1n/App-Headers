/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:34:06 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/3DFA7E95-0979-4D86-B373-C986386EF259/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Reddit/FeedObjectModel.h>

@class NSDictionary, NSArray;

@interface Carousel : FeedObjectModel {

	NSDictionary* _networkData;
	NSArray* _postObjects;

}

@property (nonatomic,retain) NSDictionary * networkData;              //@synthesize networkData=_networkData - In the implementation block
@property (nonatomic,copy) NSArray * postObjects;                     //@synthesize postObjects=_postObjects - In the implementation block
-(NSArray *)postObjects;
-(NSDictionary *)networkData;
-(void)setNetworkData:(NSDictionary *)arg1 ;
-(void)setPostObjects:(NSArray *)arg1 ;
@end

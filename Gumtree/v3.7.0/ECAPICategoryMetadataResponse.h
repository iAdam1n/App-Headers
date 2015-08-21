/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:28:03 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/ECAPIResponseBase.h>

@class NSMutableArray;

@interface ECAPICategoryMetadataResponse : ECAPIResponseBase {

	NSMutableArray* properties;
	NSMutableArray* attributes;
	NSMutableArray* price;
	NSMutableArray* address;

}

@property (nonatomic,retain) NSMutableArray * properties; 
@property (nonatomic,retain) NSMutableArray * attributes; 
@property (nonatomic,retain) NSMutableArray * price; 
@property (nonatomic,retain) NSMutableArray * address; 
-(id)findAttribute:(id)arg1 ;
-(NSMutableArray *)price;
-(NSMutableArray *)address;
-(NSMutableArray *)attributes;
-(void)setProperties:(NSMutableArray *)arg1 ;
-(NSMutableArray *)properties;
-(void)setAttributes:(NSMutableArray *)arg1 ;
-(void)setAddress:(NSMutableArray *)arg1 ;
-(void)parseData:(id)arg1 ;
-(void)setPrice:(NSMutableArray *)arg1 ;
@end

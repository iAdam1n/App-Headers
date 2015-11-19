/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:15 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString, NSMutableArray;

@interface ECAPIAlert : NSObject {

	NSString* _alertID;
	NSString* _alertType;
	NSString* _frequency;
	NSString* _searchDescription;
	NSString* _searchLink;
	NSMutableArray* _destinations;

}

@property (nonatomic,retain) NSString * alertID;                         //@synthesize alertID=_alertID - In the implementation block
@property (nonatomic,retain) NSString * alertType;                       //@synthesize alertType=_alertType - In the implementation block
@property (nonatomic,retain) NSString * frequency;                       //@synthesize frequency=_frequency - In the implementation block
@property (nonatomic,retain) NSString * searchDescription;               //@synthesize searchDescription=_searchDescription - In the implementation block
@property (nonatomic,retain) NSString * searchLink;                      //@synthesize searchLink=_searchLink - In the implementation block
@property (nonatomic,retain) NSMutableArray * destinations;              //@synthesize destinations=_destinations - In the implementation block
-(NSString *)alertID;
-(NSString *)searchLink;
-(void)setAlertID:(NSString *)arg1 ;
-(void)setSearchLink:(NSString *)arg1 ;
-(void)setDestinations:(NSMutableArray *)arg1 ;
-(id)init;
-(id)description;
-(NSString *)frequency;
-(void)setFrequency:(NSString *)arg1 ;
-(NSMutableArray *)destinations;
-(NSString *)searchDescription;
-(void)setSearchDescription:(NSString *)arg1 ;
-(void)addDestination:(id)arg1 ;
-(NSString *)alertType;
-(void)setAlertType:(NSString *)arg1 ;
@end


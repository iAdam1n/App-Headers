/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:45 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSArray;

@interface TCForm : NSObject {

	long long _identifier;
	long long _apiRequestActionIdentifier;
	NSArray* _elementIDs;

}

@property (assign,nonatomic) long long identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) long long apiRequestActionIdentifier;              //@synthesize apiRequestActionIdentifier=_apiRequestActionIdentifier - In the implementation block
@property (nonatomic,retain) NSArray * elementIDs;                              //@synthesize elementIDs=_elementIDs - In the implementation block
-(NSArray *)elementIDs;
-(long long)apiRequestActionIdentifier;
-(void)setApiRequestActionIdentifier:(long long)arg1 ;
-(void)setElementIDs:(NSArray *)arg1 ;
-(long long)identifier;
-(void)setIdentifier:(long long)arg1 ;
@end


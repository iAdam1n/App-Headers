/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:28:04 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString, NSMutableArray, NSNumber;

@interface ECAPICategory : NSObject {

	NSString* categoryID;
	NSString* canonicalName;
	NSString* localizedName;
	NSMutableArray* children;
	NSMutableArray* attributes;
	NSNumber* _maximumLocationLevel;

}

@property (nonatomic,retain) NSString * categoryID; 
@property (nonatomic,retain) NSString * canonicalName; 
@property (nonatomic,retain) NSString * localizedName; 
@property (nonatomic,retain) NSNumber * maximumLocationLevel;              //@synthesize maximumLocationLevel=_maximumLocationLevel - In the implementation block
@property (nonatomic,retain) NSMutableArray * children; 
@property (nonatomic,retain) NSMutableArray * attributes; 
-(NSString *)canonicalName;
-(void)setCategoryID:(NSString *)arg1 ;
-(void)setCanonicalName:(NSString *)arg1 ;
-(void)setMaximumLocationLevel:(NSNumber *)arg1 ;
-(NSNumber *)maximumLocationLevel;
-(void)setLocalizedName:(NSString *)arg1 ;
-(id)init;
-(id)description;
-(NSString *)localizedName;
-(NSMutableArray *)attributes;
-(void)setAttributes:(NSMutableArray *)arg1 ;
-(void)addAttribute:(id)arg1 ;
-(NSString *)categoryID;
-(void)setChildren:(NSMutableArray *)arg1 ;
-(void)addChild:(id)arg1 ;
-(NSMutableArray *)children;
@end


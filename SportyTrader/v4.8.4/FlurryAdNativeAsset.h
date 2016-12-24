/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:45:09 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/5A964037-04EE-4DC1-9951-0A6265E75908/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FlurryNativeAsset, NSString;

@interface FlurryAdNativeAsset : NSObject {

	FlurryNativeAsset* _nativeAsset;
	int type;
	int width;
	int height;
	NSString* name;
	NSString* value;

}

@property (nonatomic,retain) NSString * name; 
@property (assign,nonatomic) int type; 
@property (nonatomic,retain) NSString * value; 
@property (assign,nonatomic) int width; 
@property (assign,nonatomic) int height; 
+(id)nativeAssetTypeEnumToString:(int)arg1 ;
+(int)nativeAssetTypeStringToEnum:(id)arg1 ;
+(id)nativeAssetTypeArrayInstance;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setType:(int)arg1 ;
-(int)type;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(int)width;
-(int)height;
-(void)setWidth:(int)arg1 ;
-(void)setHeight:(int)arg1 ;
@end

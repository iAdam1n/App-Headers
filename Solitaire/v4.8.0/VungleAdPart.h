/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:43 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSData, VungleAdLegacy, NSArray;

@interface VungleAdPart : NSObject <NSCoding> {

	BOOL _isLocal;
	int _type;
	int _ready;
	NSString* _url;
	NSData* _data;
	NSString* _fileName;
	VungleAdLegacy* _bundle;
	NSArray* _postrollManifest;

}

@property (assign) int type;                                //@synthesize type=_type - In the implementation block
@property (retain) NSString * url;                          //@synthesize url=_url - In the implementation block
@property (assign) BOOL isLocal;                            //@synthesize isLocal=_isLocal - In the implementation block
@property (retain) NSData * data;                           //@synthesize data=_data - In the implementation block
@property (retain) NSString * fileName;                     //@synthesize fileName=_fileName - In the implementation block
@property (assign) VungleAdLegacy * bundle;                 //@synthesize bundle=_bundle - In the implementation block
@property (assign) int ready;                               //@synthesize ready=_ready - In the implementation block
@property (retain) NSArray * postrollManifest;              //@synthesize postrollManifest=_postrollManifest - In the implementation block
-(id)initWithURLString:(id)arg1 type:(int)arg2 isLocal:(BOOL)arg3 ;
-(void)setPostrollManifest:(NSArray *)arg1 ;
-(void)didReceivePartNotification:(id)arg1 ;
-(void)fetchAndSave;
-(void)removeFiles;
-(NSArray *)postrollManifest;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)url;
-(BOOL)isValid;
-(void)setType:(int)arg1 ;
-(int)type;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(void)setUrl:(NSString *)arg1 ;
-(VungleAdLegacy *)bundle;
-(void)setBundle:(VungleAdLegacy *)arg1 ;
-(void)setIsLocal:(BOOL)arg1 ;
-(id)localPath;
-(BOOL)isLocal;
-(void)setReady:(int)arg1 ;
-(int)ready;
-(NSString *)fileName;
-(void)setFileName:(NSString *)arg1 ;
@end


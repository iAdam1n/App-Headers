/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:15 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString, NSMutableArray, NSArray;

@interface ECAPIAttribute : NSObject {

	int _type;
	int _subtype;
	int _searchAvailability;
	int _readAvailability;
	int _writeAvailability;
	int _searchStyle;
	NSString* _canonicalName;
	NSString* _localizedName;
	NSString* _canonicalValue;
	NSString* _localizedValue;
	NSString* _dependentParentName;
	NSString* _dependentName;
	NSString* _minSize;
	NSString* _maxSize;
	NSString* _fractionalDigits;
	NSString* _integerDigits;
	NSMutableArray* _enumData;
	NSArray* _optionData;
	NSString* _subtext;
	NSString* _priceSensitive;

}

@property (assign,nonatomic) int type;                                    //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) int subtype;                                 //@synthesize subtype=_subtype - In the implementation block
@property (assign,nonatomic) int searchAvailability;                      //@synthesize searchAvailability=_searchAvailability - In the implementation block
@property (assign,nonatomic) int readAvailability;                        //@synthesize readAvailability=_readAvailability - In the implementation block
@property (assign,nonatomic) int writeAvailability;                       //@synthesize writeAvailability=_writeAvailability - In the implementation block
@property (assign,nonatomic) int searchStyle;                             //@synthesize searchStyle=_searchStyle - In the implementation block
@property (nonatomic,retain) NSString * canonicalName;                    //@synthesize canonicalName=_canonicalName - In the implementation block
@property (nonatomic,retain) NSString * localizedName;                    //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,retain) NSString * canonicalValue;                   //@synthesize canonicalValue=_canonicalValue - In the implementation block
@property (nonatomic,retain) NSString * localizedValue;                   //@synthesize localizedValue=_localizedValue - In the implementation block
@property (nonatomic,retain) NSString * dependentParentName;              //@synthesize dependentParentName=_dependentParentName - In the implementation block
@property (nonatomic,retain) NSString * dependentName;                    //@synthesize dependentName=_dependentName - In the implementation block
@property (nonatomic,retain) NSString * minSize;                          //@synthesize minSize=_minSize - In the implementation block
@property (nonatomic,retain) NSString * maxSize;                          //@synthesize maxSize=_maxSize - In the implementation block
@property (nonatomic,retain) NSString * fractionalDigits;                 //@synthesize fractionalDigits=_fractionalDigits - In the implementation block
@property (nonatomic,retain) NSString * integerDigits;                    //@synthesize integerDigits=_integerDigits - In the implementation block
@property (nonatomic,retain) NSMutableArray * enumData;                   //@synthesize enumData=_enumData - In the implementation block
@property (nonatomic,retain) NSArray * optionData;                        //@synthesize optionData=_optionData - In the implementation block
@property (nonatomic,retain) NSString * subtext;                          //@synthesize subtext=_subtext - In the implementation block
@property (nonatomic,retain) NSString * priceSensitive;                   //@synthesize priceSensitive=_priceSensitive - In the implementation block
+(id)stringWithType:(int)arg1 ;
+(int)typeWithString:(id)arg1 ;
+(int)subtypeWithString:(id)arg1 ;
+(int)availabilityWithString:(id)arg1 ;
+(int)searchStyleWithString:(id)arg1 ;
+(id)stringWithAvailability:(int)arg1 ;
+(id)stringWithSubtype:(int)arg1 ;
+(id)stringWithSearchStyle:(int)arg1 ;
-(NSString *)canonicalValue;
-(void)setCanonicalValue:(NSString *)arg1 ;
-(void)setLocalizedValue:(NSString *)arg1 ;
-(void)setSearchAvailability:(int)arg1 ;
-(void)setReadAvailability:(int)arg1 ;
-(void)setWriteAvailability:(int)arg1 ;
-(void)setSearchStyle:(int)arg1 ;
-(void)setDependentParentName:(NSString *)arg1 ;
-(void)setDependentName:(NSString *)arg1 ;
-(void)setFractionalDigits:(NSString *)arg1 ;
-(void)setIntegerDigits:(NSString *)arg1 ;
-(void)setSubtext:(NSString *)arg1 ;
-(void)setPriceSensitive:(NSString *)arg1 ;
-(void)setEnumData:(NSMutableArray *)arg1 ;
-(void)setOptionData:(NSArray *)arg1 ;
-(NSMutableArray *)enumData;
-(NSString *)localizedValue;
-(int)searchAvailability;
-(int)writeAvailability;
-(void)addEnumData:(id)arg1 ;
-(int)readAvailability;
-(int)searchStyle;
-(NSString *)dependentParentName;
-(NSString *)dependentName;
-(NSString *)fractionalDigits;
-(NSString *)integerDigits;
-(NSArray *)optionData;
-(NSString *)priceSensitive;
-(id)init;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(int)subtype;
-(NSString *)maxSize;
-(void)setSubtype:(int)arg1 ;
-(NSString *)localizedName;
-(NSString *)minSize;
-(void)setMaxSize:(NSString *)arg1 ;
-(void)setMinSize:(NSString *)arg1 ;
-(void)setCanonicalName:(NSString *)arg1 ;
-(NSString *)canonicalName;
-(void)setLocalizedName:(NSString *)arg1 ;
-(NSString *)subtext;
@end


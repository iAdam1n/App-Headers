/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface ECAdAttribute : NSObject {

	BOOL _link;
	NSString* _canonicalName;
	NSString* _localizedName;
	NSString* _canonicalValue;
	NSString* _localizedValue;
	NSArray* _canonicalValues;
	NSArray* _localizedValues;

}

@property (nonatomic,retain) NSString * canonicalName;               //@synthesize canonicalName=_canonicalName - In the implementation block
@property (nonatomic,retain) NSString * localizedName;               //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,retain) NSString * canonicalValue;              //@synthesize canonicalValue=_canonicalValue - In the implementation block
@property (nonatomic,retain) NSString * localizedValue;              //@synthesize localizedValue=_localizedValue - In the implementation block
@property (nonatomic,retain) NSArray * canonicalValues;              //@synthesize canonicalValues=_canonicalValues - In the implementation block
@property (nonatomic,retain) NSArray * localizedValues;              //@synthesize localizedValues=_localizedValues - In the implementation block
@property (assign,getter=isLink,nonatomic) BOOL link;                //@synthesize link=_link - In the implementation block
-(NSString *)canonicalValue;
-(NSString *)localizedValue;
-(void)setCanonicalValue:(NSString *)arg1 ;
-(void)setLocalizedValue:(NSString *)arg1 ;
-(void)setLocalizedValues:(NSArray *)arg1 ;
-(NSArray *)canonicalValues;
-(NSArray *)localizedValues;
-(void)setCanonicalValues:(NSArray *)arg1 ;
-(BOOL)isLink;
-(id)init;
-(id)description;
-(NSString *)localizedName;
-(void)setLink:(BOOL)arg1 ;
-(void)setCanonicalName:(NSString *)arg1 ;
-(NSString *)canonicalName;
-(void)setLocalizedName:(NSString *)arg1 ;
@end

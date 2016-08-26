/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSNumber, NSMutableArray, NSArray;

@interface ECCategory : NSObject <NSCoding> {

	BOOL _isVirtual;
	BOOL _postingCVAllowed;
	NSString* _identifier;
	NSString* _parentID;
	NSString* _canonicalName;
	NSNumber* _maximumLocationLevel;
	unsigned long long _supportTypes;
	NSString* _localizedName;
	NSMutableArray* _childrenIDArray;

}

@property (nonatomic,retain) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * parentID;                           //@synthesize parentID=_parentID - In the implementation block
@property (nonatomic,retain) NSString * canonicalName;                      //@synthesize canonicalName=_canonicalName - In the implementation block
@property (nonatomic,retain) NSString * localizedName;                      //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,retain) NSNumber * maximumLocationLevel;               //@synthesize maximumLocationLevel=_maximumLocationLevel - In the implementation block
@property (nonatomic,retain) NSMutableArray * childrenIDArray;              //@synthesize childrenIDArray=_childrenIDArray - In the implementation block
@property (assign,nonatomic) BOOL isVirtual;                                //@synthesize isVirtual=_isVirtual - In the implementation block
@property (assign,nonatomic) unsigned long long supportTypes;               //@synthesize supportTypes=_supportTypes - In the implementation block
@property (assign,nonatomic) BOOL postingCVAllowed;                         //@synthesize postingCVAllowed=_postingCVAllowed - In the implementation block
@property (nonatomic,__weak,readonly) NSArray * childrenIDs; 
+(id)categoryWithIdentifier:(id)arg1 withLocalizedName:(id)arg2 ;
+(id)virtualCategoryWithIdentifier:(id)arg1 parentID:(id)arg2 localizedName:(id)arg3 ;
+(id)categoryWithAPICategory:(id)arg1 withParentID:(id)arg2 withLocalizedNameOverride:(id)arg3 ;
+(long long)version;
-(void)setPostingCVAllowed:(BOOL)arg1 ;
-(void)setMaximumLocationLevel:(NSNumber *)arg1 ;
-(NSNumber *)maximumLocationLevel;
-(BOOL)postingCVAllowed;
-(NSArray *)childrenIDs;
-(void)setIsVirtual:(BOOL)arg1 ;
-(void)setSupportTypes:(unsigned long long)arg1 ;
-(BOOL)useAlternateLocationName;
-(NSMutableArray *)childrenIDArray;
-(void)setChildrenIDArray:(NSMutableArray *)arg1 ;
-(unsigned long long)supportTypes;
-(BOOL)isVirtual;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)localizedName;
-(void)setCanonicalName:(NSString *)arg1 ;
-(NSString *)canonicalName;
-(void)setLocalizedName:(NSString *)arg1 ;
-(NSString *)parentID;
-(void)setParentID:(NSString *)arg1 ;
-(void)addChild:(id)arg1 ;
@end

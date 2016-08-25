/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ECPostValidationProtocol <NSObject>
@required
-(id)dependentPropertiesForKey:(id)arg1;
-(BOOL)isValidValue:(id)arg1 forElement:(id)arg2 withParameters:(id)arg3;
-(BOOL)isDescriptionValid:(id)arg1 withMetadata:(id)arg2;
-(BOOL)isValidWithMetadata:(id)arg1 forKey:(id)arg2 withParameters:(id)arg3;
-(BOOL)isAttributeValidWithMetadata:(id)arg1 forKey:(id)arg2 withParameters:(id)arg3;
-(BOOL)isTitleValid:(id)arg1 withMetadata:(id)arg2;
-(BOOL)isPriceValid:(id)arg1;
-(BOOL)isLocationValidWithParameters:(id)arg1;
-(BOOL)isCategoryValidWithMetadata:(id)arg1 withParameters:(id)arg2;
-(BOOL)isLocCatValidWithMetadata:(id)arg1 withParameters:(id)arg2;
-(BOOL)isValidWithMetadata:(id)arg1 forParameters:(id)arg2;
-(BOOL)isValidWithMetadata:(id)arg1 forKeys:(id)arg2 withParameters:(id)arg3;
-(BOOL)isAddressValidWithMetadata:(id)arg1 forKeys:(id)arg2 withParameters:(id)arg3;
-(BOOL)areImagesValid:(id)arg1 withParameters:(id)arg2;
-(BOOL)isEmpty:(id)arg1;

@end


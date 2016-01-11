//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewDelegate.h"

@class NSIndexPath, UICollectionView, UICollectionViewLayout;

@protocol UICollectionViewDelegateFlowLayout <UICollectionViewDelegate>

@optional
- (struct UIEdgeInsets)collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 sizeForItemAtIndexPath:(NSIndexPath *)arg3;
@end

